	// bo nho Flash tuong tu bo nho ROM trong may tinh, la noi luu tru cacs sketch, them PROGMEM vao sau ten mang 
	// hang ky tu (const char) de luu mang nay vao bo nho Flash
	// mang ky tu htmHomePage chua HTMl, CSS va Javascript can de xay dung (build) va thiet ke (style)
	// trang web va xu ly tuong tac client-server su dung giao thuc WebSocket
const char* htmlHomePage PROGMEM = R"HTMLHOMEPAGE(
<!DOCTYPE html> // chi ra rang chung ta dang gui mot HTML
<html> // bat dau mot trang web
  <head> //bat dau phan dau cua trang web
  // cho trinh duyet biet phai hien thi noi dung nhu nao
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no"> 
    <style> // thiet ke cac thuoc tinh co trong web page bang CSS
    // thiet ke mui ten
    .arrows {
      font-size:40px;
      color:red;
    }
    // thiet ke nut bam
    td.button {
      background-color:black;
      // border-radius de xac dinh ti le bo goc trong cua cac phan tu html
      border-radius:25%;
      // box-shadow dung de thiet lap bong cho phan tu html, tham so dau theo chieu doc,
      // tham so thu 2 theo chieu ngang, tham so thu 3 la mau sac
      box-shadow: 5px 5px #888888;
    }
    td.button:active {
      transform: translate(5px,5px);
      box-shadow: none; 
    } // tinh nang danh dau lua chon van ban
    .noselect {
      -webkit-touch-callout: none; /* iOS Safari */
        -webkit-user-select: none; /* Safari */
         -khtml-user-select: none; /* Konqueror HTML */
           -moz-user-select: none; /* Firefox */
            -ms-user-select: none; /* Internet Explorer/Edge */
                user-select: none; /* Non-prefixed version, currently
                                      supported by Chrome and Opera */
    }
	// slidecontainer = dieu chinh do dai thanh truot 
    .slidecontainer {
      width: 100%;
    } // thiet ke thanh truot
    .slider {
      -webkit-appearance: none;
      width: 100%;
      height: 15px;
      border-radius: 5px;
      background: #d3d3d3;
      outline: none;
      // opacity = do mowf
      opacity: 0.7;
      -webkit-transition: .2s;
      transition: opacity .2s;
    }
    .slider:hover {
      opacity: 1;
    }
    // -webkit-slider-thumb de chinh dau cham do tren thanh truot
    .slider::-webkit-slider-thumb {
      -webkit-appearance: none;
      appearance: none;
      width: 25px;
      height: 25px;
      border-radius: 50%;
      background: red;
      cursor: pointer;
    }
    .slider::-moz-range-thumb {
      width: 25px;
      height: 25px;
      border-radius: 50%;
      background: red;
      cursor: pointer;
    }
    </style> // ket thuc phan thiet ke thuoc tinh
  
  </head> // ket thuc phan dau cua web page
  // bat dau phan than cua web page
  <body class="noselect" align="center" style="background-color:white">
     
    <!--h2 style="color: teal;text-align:center;">Wi-Fi Camera &#128663; Control</h2-->
    // table dung de tao bang trong html
    // <td> dung de tao mot phan tu noi dung trong bang
    // <tr> xac dinh hang cua table
    <table id="mainTable" style="width:400px;margin:auto;table-layout:fixed" CELLSPACING=10>
      <tr>
        <img id="cameraImage" src="" style="width:400px;height:250px"></td>
      </tr> 
      <tr>
        <td></td>
        <td class="button" ontouchstart='sendButtonInput("MoveCar","1")' ontouchend='sendButtonInput("MoveCar","0")'><span class="arrows" >&#8679;</span></td>
        <td></td>
      </tr>
      <tr>
        <td class="button" ontouchstart='sendButtonInput("MoveCar","3")' ontouchend='sendButtonInput("MoveCar","0")'><span class="arrows" >&#8678;</span></td>
        <td class="button"></td>    
        <td class="button" ontouchstart='sendButtonInput("MoveCar","4")' ontouchend='sendButtonInput("MoveCar","0")'><span class="arrows" >&#8680;</span></td>
      </tr>
      <tr>
        <td></td>
        <td class="button" ontouchstart='sendButtonInput("MoveCar","2")' ontouchend='sendButtonInput("MoveCar","0")'><span class="arrows" >&#8681;</span></td>
        <td></td>
      </tr>
      <tr/><tr/>
      <tr>
        <td style="text-align:left"><b>Speed:</b></td>
        <td colspan=2>
         <div class="slidecontainer">
            <input type="range" min="0" max="255" value="150" class="slider" id="Speed" oninput='sendButtonInput("Speed",value)'>
          </div>
        </td>
      </tr>        
      <tr>
        <td style="text-align:left"><b>Light:</b></td>
        <td colspan=2>
          <div class="slidecontainer">
            <input type="range" min="0" max="255" value="0" class="slider" id="Light" oninput='sendButtonInput("Light",value)'>
          </div>
        </td>   
      </tr>
    </table>
    
  	// the <script> xac dinh ma JavaScript can duoc chay tren web page
  	// Ma JavaScript dung de xu ly WebSockets, chiu trach nhiem khoi tao ket noi WebSocket voi server ngay khi 
  	// giao dien web duoc tai len trinh duyet va xu ly cac thay doi du lieu thong qua WebSocket
    <script>
    	// Url la diem vao (entry point) giao dien Websocket
    	// window.location.hostname lay dia chi hien tai cua trang web (dia chi IP cua webserver)
      var webSocketCameraUrl = "ws:\/\/" + window.location.hostname + "/Camera";
      var webSocketCarInputUrl = "ws:\/\/" + window.location.hostname + "/CarInput";     
	  // tao 2 bien toan cuc  
      var websocketCamera;
      var websocketCarInput;
      
      function initCameraWebSocket() 
      {
      	// ham khoi tao mot ket noi WebSocket dua tren diem vao da dinh nghia tu truoc
        websocketCamera = new WebSocket(webSocketCameraUrl);
        websocketCamera.binaryType = 'blob';
        // khi ket noi duoc mo khong in thong diep nao
        websocketCamera.onopen    = function(event){};
        // neu vi mot ly do gi do, ket noi bi dong, ta goi lai ham initCameraWebSocket sau moi 2000mili giay
        websocketCamera.onclose   = function(event){setTimeout(initCameraWebSocket, 2000);};
        websocketCamera.onmessage = function(event)
        {
        	// phuong thuc getElementById se tra ve phan tu co thuoc tinh ID duoc cung cap, phuong thuc 
        	// se tra ve NULL neu khong co phan tu nao co thuoc tinh ID duoc cung cap
          var imageId = document.getElementById("cameraImage");
          // URL.createObjectURL() cho phep tao ra cac chuoi URL don gian co the duoc su dung de tham chieu
          // bat ki du lieu nao co the duoc tham chieu den bang cach su dung doi tuong file DOM
          imageId.src = URL.createObjectURL(event.data);
        };
      }
      
      function initCarInputWebSocket() 
      {
        websocketCarInput = new WebSocket(webSocketCarInputUrl);
        websocketCarInput.onopen    = function(event)
        {
          var speedButton = document.getElementById("Speed");
          sendButtonInput("Speed", speedButton.value);
          var lightButton = document.getElementById("Light");
          sendButtonInput("Light", lightButton.value);
        };
        websocketCarInput.onclose   = function(event){setTimeout(initCarInputWebSocket, 2000);};
        websocketCarInput.onmessage = function(event){};        
      }
      
      function initWebSocket() 
      {
        initCameraWebSocket ();
        initCarInputWebSocket();
      }
      function sendButtonInput(key, value) 
      {
        var data = key + "," + value;
        websocketCarInput.send(data);
      }
    	// tao mot trinh nghe su lien (event listener) goi den phuong thuc onload khi trang web tai
    	// function onload(event){}
    	// phuong thuc onload goi den ham initCameraWebSocket va initCarInputWebSocket de khoi tao ket noi WebSocket 
      window.onload = initWebSocket;
      document.getElementById("mainTable").addEventListener("touchend", function(event){
        event.preventDefault()
      });      
    </script>
  </body>    
</html>
)HTMLHOMEPAGE";
