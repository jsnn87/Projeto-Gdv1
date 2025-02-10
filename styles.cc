/* Estilos gerais */
*, *:before, *:after {
    box-sizing: border-box;
}

body {
    margin: 0;
    padding: 0;
    background-color: #f4f4f4;
    font-family: Arial, sans-serif;
}

/* Layout principal */
.main-container {
    display: flex;
    height: 100vh;
}

.content {
    flex: 100%;
    display: flex;
    flex-direction: column;
    gap: 20px;
    padding: 20px;
}

.container {
    padding: 20px;
    background-color: #fff;
    border-radius: 10px;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
    border: 1px solid rgba(128, 128, 128, 0.3);
}

.flex-container {
    display: flex;
    gap: 20px;
    flex: 1;
}

.left-column {
    flex: 20%;
    display: flex;
    flex-direction: column;
    gap: 20px;
}

.right-column {
    flex: 80%;
    display: flex;
    flex-direction: column;
    gap: 20px;
}

.container2, .container3, .container4 {
    flex: 1;
}

.container5 {
    height: 25px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}

.container6 {
    flex: 1;
    display: flex;
    flex-direction: column;
    justify-content: flex-start;
    align-items: center;
}

/* Estilos responsivos */
@media (max-width: 768px) {
    .main-container {
        flex-direction: column;
    }

    .content {
        flex: 100%;
    }

    .flex-container {
        flex-direction: column;
    }

    .left-column, .right-column {
        flex: 1;
    }

    .container5 {
        height: auto;
        padding: 10px;
    }

    .container6 {
        height: auto;
        padding: 10px;
    }
}

@media (max-width: 480px) {
    body {
        padding: 0;
    }

    .container {
        padding: 10px;
    }

    .container5, .container6 {
        font-size: 14px;
    }
}

/* Sidebar */
nav {
    position: fixed;
    top: 50%;
    left: 0;
    transform: translateY(-50%);
    background: transparent;
    width: 70px;
    height: 70%;
    z-index: 100;
    display: flex;
    flex-direction: column;
    align-items: center;
}

nav ul {
    text-align: center;
    list-style: none;
    padding: 0;
    margin: 0;
}

nav ul li {
    position: relative;
    width: 70px;
    height: 70px;
    cursor: pointer;
    background: crimson;
    text-transform: uppercase;
    transition: all 0.4s ease-out;
    display: flex;
    justify-content: center;
    align-items: center;
}

nav ul li:after {
    position: absolute;
    background: white;
    color: crimson;
    top: 0;
    left: 70px;
    width: 70px;
    height: 100%;
    opacity: .5;
    transform: perspective(400px) rotateY(90deg);
    transform-origin: 0 100%;
    transition: all 0.4s ease-out;
}

nav ul li:nth-child(1):after {
    content: "Home";
    line-height: 88px;
}
nav ul li:nth-child(2):after {
    content: "About";
    line-height: 88px;
}
nav ul li:nth-child(3):after {
    content: "Work";
    line-height: 85px;
}
nav ul li:nth-child(4):after {
    content: "Say hi";
    line-height: 70px;
}

nav ul li:hover {
    transform: translateX(-70px);
}

nav ul li:hover:after {
    opacity: 1;
    transform: perspective(400px) rotateY(0deg) scale(1);
}

nav ul li > div {
    display: inline-block;
    padding: 25px 0;
    background: transparent;
}

nav ul li div {
    position: relative;
}

.fa-home, .fa-user, .fa-briefcase, .fa-paper-plane {
    font-size: 32px;
    color: white;
}

nav ul li:hover .fa-home,
nav ul li:hover .fa-user,
nav ul li:hover .fa-briefcase,
nav ul li:hover .fa-paper-plane {
    color: crimson;
    text-shadow: 1px 1px 2px rgba(0,0,0,0.7);
}

/* Seções */
section {
    margin-left: 100px;
    padding: 20px;
    display: none;
}

section.active {
    display: block;
}

nav ul li.active {
    background-color: #444;
}
