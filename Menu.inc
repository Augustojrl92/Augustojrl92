<?php
	if (isset($_GET["codCiudad"])){
		//echo $_GET["codCiudad"];
		if ($_GET["codCiudad"]==1)
			$pagina="Londres";
		elseif($_GET["codCiudad"]==2)
			$pagina="Paris";
		elseif($_GET["codCiudad"]==3)
			$pagina="Roma";
		elseif($_GET["codCiudad"]==4)
			$pagina="Varsovia";
		elseif($_GET["codCiudad"]==5)
			$pagina="Madrid";
		else
			$pagina="Home";
		}
	else
		$pagina="Home";
?>

<nav class="navbar navbar-inverse">
	<div class="container-fluid">
		<div class="navbar-header">
			<a class="navbar-brand" href="#">Ciudades de Europa <?php if($pagina!='Home'){ echo $pagina;}?></a>
		</div>
		<ul class="nav navbar-nav">
			<li <?php if ($pagina=='Home'){ echo "class='active'";}?>><a href="Ciudades.php">Home</a></li>
			<li <?php if ($pagina=='Londres'){ echo "class='active'";}?>><a href="Ciudades.php?codCiudad=1">Londres</a></li>
			<li <?php if ($pagina=='Paris'){ echo "class='active'";}?>><a href="Ciudades.php?codCiudad=2">Paris</a></li>
			<li <?php if ($pagina=='Roma'){ echo "class='active'";}?>><a href="Ciudades.php?codCiudad=3">Roma</a></li>
			<li <?php if ($pagina=='Varsovia'){ echo "class='active'";}?>><a href="Ciudades.php?codCiudad=4">Varsovia</a></li>
			<li <?php if ($pagina=='Madrid'){ echo "class='active'";}?>><a href="Ciudades.php?codCiudad=5">Madrid</a></li>
			<li  class='active'><a href="logout.php">Logout sin valor</a></li>
			
		</ul>
	</div>
</nav>