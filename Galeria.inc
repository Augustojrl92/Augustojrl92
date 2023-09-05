<?php
  $Londres=array("https://cdn.londonandpartners.com/l-and-p/assets/media/60972-640x360-tech_ns.jpg|||TextoLondres1",
  "https://www.ecestaticos.com/image/clipping/b8d7016d9c0250b78fcd406130bdb011/londres-tambien-celebra-elecciones-a-la-alcaldia-por-que-nadie-habla-de-ellas.jpg|||TextoLondres2",
  "https://ichef.bbci.co.uk/news/640/amz/worldservice/live/assets/images/2015/01/23/150123153622_sp_big_ben_624x351_bbc.jpg|||TextoLondres3 hola");

  $Paris=array("https://es.parisinfo.com/bundles/otcpotcp/images/paris_380x244.jpg|||TextoParis1",
  "https://cdn.flixbus.de/city_description_images/paris-informacion-autobuses.jpg|||TextoParis2",
  "https://media.tacdn.com/media/attractions-splice-spp-674x446/07/03/1c/9c.jpg|||TextoParis3");

  $Roma=array("https://upload.wikimedia.org/wikipedia/commons/0/0a/Roma-Vittoriano01.jpg|||TextoRoma1",
  "http://img.rtve.es/v/3727398?w=1180&preview=1474327349719.JPG|||TextoRoma2",
  "http://www.esacademic.com/pictures/eswiki/82/RomaAltarePatriaTramonto.jpg|||TextoRoma3");

  $Varsovia=array("https://i2.wp.com/www.aprendizajeviajero.com/wp-content/uploads/2017/07/QUE-VER-EN-VARSOVIA-POLONIA-STARE.jpeg?w=1200&ssl=1|||TextoVarsovia1",
  "http://www.compartetusviajes.com/images/viajes/600/POLONIA/Varsovia/16.Varsovia.jpg|||TextoVarsovia2",
  "http://www.viajologoexisto.com.br/wp-content/uploads/2018/08/Polonia_Varsovia-6204.jpg|||TextoVarsovia3");

  $Madrid=array("https://placehold.co/293x172?text=Hello+World1|||Lugar1",
  "https://placehold.co/293x172?text=Hello+World2|||Lugar2",
  "https://placehold.co/293x172?text=Hello+World3|||Lugar3");

  $CiudadActual;

  switch ($pagina) {
    case "Londres":
        $CiudadActual=$Londres;
        break;
    case "Paris":
        $CiudadActual=$Paris;
        break;
    case "Roma":
        $CiudadActual=$Roma;
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
