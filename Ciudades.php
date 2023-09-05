<?php
session_start();
if (($_SESSION["UsuarioValidado"])=="")
header("Location: index.htm");
?>

<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Ciudades de Europa</title>
    <?php require 'IncludesHead.inc';?>
  </head>
  <body>
    <?php require 'Menu.inc';?>
    <?php
    if($pagina=="Home"){
    ?>
      <div class="container">
        <h3>Seleccione una opción...</h3>
      </div>
    <?php
    }
    else{
    ?>
      <div class="jumbotron text-center">
        <h1>
          <?php echo $pagina;?>
        </h1>
      </div>
      <?php require 'Galeria.inc';?>     
    <?php
    }
    ?> 
    <?php require 'Footer.inc';?> 
  </body>
</html>