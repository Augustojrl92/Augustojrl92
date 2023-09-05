<?php
	session_start();
	// define variables and set to empty values
	$usuario = $contrasena = "";
	if ($_SERVER["REQUEST_METHOD"] == "POST") {	
		$usuario=$_POST["txtUsuario"];
		$contrasena=$_POST["txtContrasena"];
	}

	echo "Usuario " . $usuario  . "<br>";
	echo "Contrasena " . $contrasena . "<br>";

	if (($usuario=="augusto") && ($contrasena=="1234"))
		{
			echo "OK";
			$_SESSION["UsuarioValidado"] = $usuario;
			/* Redirect browser */
			header("Location: ciudades.php");
			/* Make sure that code below does not get executed when we redirect. */
			exit;
		}
	if (($usuario=="jorge") && ($contrasena=="1234"))
	{
		echo "OK";
		$_SESSION["UsuarioValidado"] = $usuario;
		/* Redirect browser */
		header("Location: ciudades2.php");
		/* Make sure that code below does not get executed when we redirect. */
		exit;
	}
	else
		echo "Acceso denegado";
	
?>