const char webpage[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <!-- <link rel="stylesheet" href="index.css"> -->
    <link href="https://fonts.googleapis.com/css2?family=Lato:wght@400&display=swap" rel="stylesheet">
    <link rel="stylesheet" href="https://fonts.googleapis.com/icon?family=Material+Icons">
    <script src="https://kit.fontawesome.com/dc375b638e.js" crossorigin="anonymous"></script>
</head>

<style>



@import url('https://fonts.googleapis.com/css2?family=PT+Sans&display=swap');
@import url('https://fonts.googleapis.com/css2?family=Open+Sans+Condensed:ital,wght@1,300&family=PT+Sans&display=swap');



:root {
  --main-radius: 5px;
  --main-padding: 5px;
}

body {
  font-family: "Inter", sans-serif;
  background: linear-gradient(to right, #bdfff3, #4ac29a);
  font-family: 'Open Sans Condensed', sans-serif;
  font-size: large;
}

#container {
  margin: 0px auto;
  
  
}
#videoElement {
  width: 80%;
    height: 330px;
  
}

.container {
  display: grid;
  height: 100vh;
  grid-template-columns: 2.4fr 3fr 3fr;
  grid-template-rows: 0fr  0.6fr 0.2fr;
  grid-template-areas:
    "content nav nav "
    "sidebar main content2 "
    "sidebar main content2"
    "sidebar main content2";
  grid-gap: 0.2rem;
  font-weight: 800;
  text-transform: uppercase;
  font-size: 12px;
  color: #004d40;
  text-align: center;
}

nav {
  /* background: #4753a8; */
  /* border: whitesmoke 2px solid; */
  grid-area: nav;
  border-radius: var(--main-radius);
  

  
}

main {
  /* background: #4753a8; */
  grid-area: main;
  border-radius: var(--main-radius);
  padding-top: var(--main-padding);
  margin-left: 25px ;
  width:850px;
  border-radius: 20px;
  box-shadow: 0 4px 8px 0 rgba(0, 0, 0, 0.2), 0 6px 20px 0 rgba(0, 0, 0, 0.19);
}

#sidebar {
  
  /* background: #4753a8; */
  grid-area: sidebar;
  border-radius: var(--main-radius);
  padding-top: var(--main-padding);
  text-align: center;
  margin-left: 5px;
  border-radius: 20px;
  box-shadow: 0 4px 8px 0 rgba(0, 0, 0, 0.2), 0 6px 20px 0 rgba(0, 0, 0, 0.19);
}

#content2{
  grid-area: content2;
  border-radius: var(--main-radius);
  padding-top: var(--main-padding);
  box-shadow: 0 4px 8px 0 rgba(0, 0, 0, 0.2), 0 6px 20px 0 rgba(0, 0, 0, 0.19);
  border-radius: 20px;
  padding: 10px;
  margin-left: 25px;
}

/* #content3 {
  background: #73ffba;
  grid-area: content3;
  border-radius: var(--main-radius);
  padding-top: var(--main-padding);
} */
/* 
footer {
  background: #1de9b6;
  grid-area: footer;
  border-radius: var(--main-radius);
  padding-top: var(--main-padding);
} */

a {
  text-align: center;
  display: block;
  font-family: inherit;
  text-decoration: none;
  font-weight: bold;
  margin: 1rem;
}

.box {
  width: 100%;
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
  margin-top: 30px;
}

.switch-holder {
  display: flex;
  padding: 10px 20px;
  border-radius: 10px;
  margin-bottom: 30px;
  box-shadow: -8px -8px 15px rgba(255, 255, 255, 0.7),
    10px 10px 10px rgba(0, 0, 0, 0.3),
    inset 8px 8px 15px rgba(255, 255, 255, 0.7),
    inset 10px 10px 10px rgba(0, 0, 0, 0.3);
  justify-content: space-between;
  align-items: center;
  background-color: #f0f7f2
}

.switch-label {
  width: 150px;
}

.switch-label i {
  margin-right: 5px;
}

.switch-toggle {
  height: 40px;
}

.switch-toggle input[type="checkbox"] {
  position: absolute;
  opacity: 0;
  z-index: -2;
}

.switch-toggle input[type="checkbox"] + label {
  position: relative;
  display: inline-block;
  width: 100px;
  height: 40px;
  border-radius: 20px;
  margin: 0;
  cursor: pointer;
  box-shadow: inset -8px -8px 15px rgba(255, 255, 255, 0.6),
    inset 10px 10px 10px rgba(0, 0, 0, 0.25);
}

.switch-toggle input[type="checkbox"] + label::before {
  position: absolute;
  content: "OFF";
  font-size: 13px;
  text-align: center;
  line-height: 25px;
  top: 8px;
  left: 8px;
  width: 45px;
  height: 25px;
  border-radius: 20px;
  background-color: #d1dad3;
  box-shadow: -3px -3px 5px rgba(255, 255, 255, 0.5),
    3px 3px 5px rgba(0, 0, 0, 0.25);
  transition: 0.3s ease-in-out;
}

.switch-toggle input[type="checkbox"]:checked + label::before {
  left: 50%;
  content: "ON";
  color: #fff;
  background-color: #00b33c;
  box-shadow: -3px -3px 5px rgba(255, 255, 255, 0.5), 3px 3px 5px #00b33c;
}

ul {
  display: inline-flex;
  list-style-type: none;
  margin: 0;
  padding: 0;
  overflow: hidden;
  justify-content: space-evenly;
}

li {
  float: left;
}

li a {
  display: block;
  color: white;
  text-align: center;
  padding: 7px 8px;
  font-size: 20px;
  text-decoration: none;
}



</style>
<body>

    <div class="container">
        <nav>
            <h1 style="font-size: 38px;">Good Morning ,Javi
                <span style="float: right;">08:14 PM.....</span>
            </h1>
        </nav>

        <main>
                <ul>
                    <li><a class="active" href="#home" style="color: inherit;">Living Room</a></li>
                    <li><a href="#news">Dining Room</a></li>
                    <li><a href="#contact">Bedroom</a></li>
                    <li><a href="#about">Backyard</a></li>
                </ul>

            <div class="box" style="margin-top: 10px;margin-bottom: 5px;">
                <div class="switch-holder" style="background-color: inherit; margin-bottom: 5px; box-shadow: none;">
                    <div class="switch-label" style="width: 550px;margin-bottom: 5px; font-size: 18px;">
                        <i class="fa fa-video-camera fa-2x" style="margin-right: 17px;float: right;"></i></i><span style="font-size: 20px;float: left;">CC CAMERA</span>
                    </div>
                    <div class="switch-toggle">
                        <input type="checkbox" id="camera">
                        <label for="camera"></label>
                    </div>
                </div>
                <img style=" justify-content: center; margin-bottom: 5px; border-radius: 25px; margin-top: 15px;"  width="80%" height="330px" src="
                http://www.newpropertylaunch.my/wp-content/uploads/5-easy-ways-to-reduce-rental-2.jpg" alt="">

               <div id="container" style="width:80%; height:330px;" >
                    <video style=" justify-content: center; margin-bottom: 5px; border-radius: 25px; margin-top: 15px;"  width="80%" height="330px"  autoplay="true" id="videoElement">
                                </video>
                </div>
        </main>






        <div id="sidebar" style="margin-left: 30px;">

 <h1 >Weather Cast</h1>
          <hr style="margin-left: 25px; margin-right: 25px; color: green;">


            <img style="margin-top: 15px;"
                src="https://i.pinimg.com/originals/0e/f3/bb/0ef3bb66d9216fffcea9022628f7bb26.gif" height="130px"
                width="180px" alt="Unable to Load">

            <h1>Sunny</h1>
            <i class="fas fa-sun fa-4x" style="margin-bottom: 15px ; color:#fcc404"></i>
            <h2 style="text-align: left; margin-left: 50px;margin-right: 50px; font-weight: bolder; color: #004d40; ">Temperature <span
                    style="float: right; padding-right: 15px;" id="Temperature">0</span> </h2>
            <hr style="margin-left: 25px; margin-right: 25px;">
              
                <h2 style="text-align: left; margin-left: 50px;margin-right: 50px; font-weight: bolder; color: #004d40; ">Humidity <span
                  style="float: right; padding-right: 15px;
                  font-weight: bolder;" id="humidity">0</span> </h2>

              <hr style="margin-left: 25px; margin-right: 25px;">

        </div>

        <div id="content2">

            <h1>Devices </h1>
            <div class="box">
                <div class="switch-holder">
                    <div class="switch-label">

                        <i class="fa fa-lightbulb-o"></i><span>Light</span>
                    </div>
                    <div class="switch-toggle">
                        <input type="checkbox" id="light1">
                        <label for="light1"></label>
                    </div>
                </div>


                <div class="switch-holder">
                    <div class="switch-label">
                        <i class="fas fa-fan"></i></i><span>Fan</span>
                    </div>
                    <div class="switch-toggle">
                        <input type="checkbox" id="light2">
                        <label for="light2"></label>
                    </div>

                </div>

                <div class="switch-holder">
                    <div class="switch-label">
                        <i class="fa fa-volume-up"></i></i><span>Speaker</span>
                    </div>
                    <div class="switch-toggle">
                        <input type="checkbox" id="light3">
                        <label for="light3"></label>
                    </div>

                </div>

                <div class="switch-holder">
                    <div class="switch-label">
                         <i class="fa fa-wifi" aria-hidden="true"></i><span>Wi-Fi</span>
                    </div>
                    <div class="switch-toggle">
                        <input type="checkbox" id="light4">
                        <label for="light4"></label>
                    </div>

                </div>

                <div class="switch-holder">
                    <div class="switch-label">
                        <i class="fas fa-wind"></i></i><span>AC</span>
                    </div>
                    <div class="switch-toggle">
                        <input type="checkbox" id="light5">
                        <label for="light5"></label>
                    </div>

                </div>

            </div>


        </div>

    </div>
</body>
<script>
var checkbox = document.querySelector("input[id=light1]");


checkbox.addEventListener( 'change', function() {
    if(this.checked) {
        send(1);
    } else {
        send(0);
    }
});

function send(led_sts) 
{
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("state").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "led_set?state="+led_sts, true);
  xhttp.send();
}
setInterval(function() 
{
  getData();
}, 2000); 

//

function getData() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      var txt = this.responseText;
var obj = JSON.parse(txt); 
document.getElementById("Temperature").innerHTML = Math.round(obj.Temperature) + "&deg;C";
document.getElementById("humidity").innerHTML = Math.round(obj.Humidity) + "%";
console.log(obj.Humidity);
    }
  };
  xhttp.open("GET", "adcread", true);
  xhttp.send();
}

var camCheck = document.querySelector("input[id=camera]");


camCheck.addEventListener( 'change', function() {
    if(this.checked) {
        src = document.getElementById("container")
        src.style.display = "block";
        var video = document.querySelector("#videoElement");
        if (navigator.mediaDevices.getUserMedia) {
  navigator.mediaDevices.getUserMedia({ video: true })
    .then(function (stream) {
      video.srcObject = stream;
    })
    .catch(function (error) {
      console.log("Something went wrong!");
    });
    
}
    } else {
        src = document.getElementById("container")
        src.style.display = "none";
    }
});
</script>
</html>
)=====";
