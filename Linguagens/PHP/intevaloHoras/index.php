<?php

$date = new DateTime( '2011-10-11 16:08:06' ); // data e hora
$interval = $date->diff( new DateTime( ) ); // data e hora atual

echo $interval->format( '%Y Anos, %m Meses, %d Dias, %H Horas, %i Minutos e %s Segundos' );
