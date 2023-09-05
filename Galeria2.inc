<?php
 
  $Paris=array("https://es.parisinfo.com/bundles/otcpotcp/images/paris_380x244.jpg|||TextoParis1",
  "https://cdn.flixbus.de/city_description_images/paris-informacion-autobuses.jpg|||TextoParis2",
  "https://media.tacdn.com/media/attractions-splice-spp-674x446/07/03/1c/9c.jpg|||TextoParis3");

;

  $Varsovia=array("https://i2.wp.com/www.aprendizajeviajero.com/wp-content/uploads/2017/07/QUE-VER-EN-VARSOVIA-POLONIA-STARE.jpeg?w=1200&ssl=1|||TextoVarsovia1",
  "http://www.compartetusviajes.com/images/viajes/600/POLONIA/Varsovia/16.Varsovia.jpg|||TextoVarsovia2",
  "http://www.viajologoexisto.com.br/wp-content/uploads/2018/08/Polonia_Varsovia-6204.jpg|||TextoVarsovia3");

  $Madrid=array("https://placehold.co/293x172?text=Hello+World1|||Lugar1",
  "https://placehold.co/293x172?text=Hello+World2|||Lugar2",
  "https://placehold.co/293x172?text=Hello+World3|||Lugar3");

  $CiudadActual;

  switch ($pagina) {
    case "Londres":
        echo (<script>alert("Usuario jorge no puede ver esta pagina solo el usuario augusto");</script);
        break;
    case "Paris":
        $CiudadActual=$Paris;
        break;
    case "Roma":
        $CiudadActual=$Roma;
         echo (<script>alert("Usuario jorge no puede ver esta pagina solo el usuario augusto");</script);
        break;
    case "Varsovia":
        $CiudadActual=$Varsovia;
        break;   
    case "Madrid":
        $CiudadActual=$Madrid;
        break;   
  }
?>

<div class="container">
  <div id="carouselExampleIndicators" class="carousel slide" data-ride="carousel">
<ol class="carousel-indicators">
<?php for ($i = 0; $i < count($CiudadActual); $i++) { ?>
<li data-target="#carouselExampleIndicators" data-slide-to="<?php echo $i; ?>" <?php if ($i === 0) { echo 'class="active"'; } ?>></li>
<?php } ?>
</ol>
<div class="carousel-inner">
<?php for ($i = 0; $i < count($CiudadActual); $i++) {
     $rutaImagen = explode("|||", $CiudadActual[$i])[0];
     $textoImagen = explode("|||", $CiudadActual[$i])[1];
   ?>
<div class="carousel-item <?php if ($i === 0) { echo 'active'; } ?>">
<img class="d-block w-100" src="<?php echo $rutaImagen; ?>" alt="<?php echo $textoImagen; ?>">
<div class="carousel-caption d-none d-md-block">
<h3><?php echo $textoImagen; ?></h3>
</div>
</div>
<?php } ?>
</div>
<a class="carousel-control-prev" href="#carouselExampleIndicators" role="button" data-slide="prev">
<span class="carousel-control-prev-icon" aria-hidden="true"></span>
<span class="sr-only">Previous</span>
</a>
<a class="carousel-control-next" href="#carouselExampleIndicators" role="button" data-slide="next">
<span class="carousel-control-next-icon" aria-hidden="true"></span>
<span class="sr-only">Next</span>
</a>

  </div>
</div>
