* {
  margin: 0;
  padding: 0;
}
.fondopagina {
  background-color:#EEE3CB;
}

.encabezado, .menudecontenido  {
  background-color:;
  width: 80%;
  max-width: 1000;
  padding: 10px;
  margin: 20px auto;
  }

}

#logotexto {
  display: flex;
  justify-content: center;
  align-items: center;
}
.imagen{
  width: 230px;
  height:300x;

}

#TITULOPRINCIPAL{
  text-align: center;
}

.E {
  color:#FF9B9B;
  font-family: Pretty Girl;
 font-size: 72;
}

 .PRO {
  color:#967E76;
font-size: 71;
 }
.MENUDEOPCIONES{
  background-color:#967E76;
  overflow: hidden;
  font-family: Pretty Girl;
  font-size: 20;

}

#opcion {
  background-color:#967E76;
  list-style: none;
  float:right;
}

#enlaces {
  padding: 11px 62px;
  display: block;
  color:black;
  text-decoration: none;


}

#opcion:hover {
background-color:#FF9B9B;
transition: background-color 2s;
display: block;
}

.me{
  color:black;
}
.div1 {
  position: relative;
}

.div1 .div2 {
  position: absolute;  
  top: 0;  
  left: 0;
  opacity: 0;
  transition: .5s;
}

.div1:hover .div2 {
  opacity: 1;
}
.slider-container{
  display: flex;
  width: 50%; 
  height: 100vh;
  overflow-x: scroll;
/*                    */
  scroll-snap-typex: x mandatory;
}
.slider-container img{
  flex: 0 0 100%;
  width: 100%;
  object-fit: cover;
  /*                    */

  croll-snap-typex: x mandatory;
}
section {
  display: flex;
  width: 800px;
  height:930x;
}
section img{
  width: 0px;
  flex-grow: 1;
  object-fit: cover;
  opacity: .8;
  transition: .5 ease;
}
section img:hover{
  cursor: crosshair;
  width: 100px;
  opacity: 1;
  filter: contrast(120%);


}


.container {
  max-width: 120rem;
  margin: 0 auto;
  color:#FF9B9B; 
}

.heading-1 {
  text-align: center;
  font-weight: 500;
  font-size: 5rem;
}


.hero {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 2rem 0;
}



.container-logo i {
  font-size: 3rem;
}

.container-logo h1 a {
  text-decoration: none;
  color: #000;
  font-size: 3rem;
  text-transform: uppercase;
  letter-spacing: -1px;
}.customer-support {
  display: flex;
  align-items: center;
  gap: 2rem;
}

.customer-support i {
  font-size: 3.3rem;
}

.content-customer-support {
  display: flex;
  flex-direction: column;
}

.container-logo {
  display: flex;
  align-items: center;
  gap: 0.5rem;
}

.container-user {
  display: flex;
  gap: 1rem;
  cursor: pointer;
}

.container-user .fa-user {
  font-size: 3rem;
  padding-right: 2.5rem;
 
}

.container-user .fa-basket-shopping {
  font-size: 3rem;
  color: var(--primary-color);
  padding-left: 1rem;
}

.content-shopping-cart {
  display: flex;
  flex-direction: column;
}

}

.navbar {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 1rem 0;
}

.navbar .fa-bars {
  display: none;
}

.search-form {
  position: relative;
  display: flex;
  align-items: center;
  border: 2px solid #fff;
  border-radius: 2rem;
  background-color: #fff;
  height: 3rem;
  overflow: hidden;
}

.search-form input {
  outline: none;
  font-family: inherit;
  border: none;
  width: 25rem;
  font-size: 1.4rem;
  padding: 0 2rem;
  color: #777;
  cursor: pointer;
}

.search-form input::-webkit-search-cancel-button {
  appearance: none;
}

.search-form .btn-search {
  border: none;
  background-color: var(--primary-color);
  display: flex;
  align-items: center;
  justify-content: center;
  height: 100%;
  padding: 1rem;
}

.btn-search i {
  font-size: 2rem;
  color: #fff;
}