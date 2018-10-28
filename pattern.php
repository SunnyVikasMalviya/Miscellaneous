<?php
	for($i=1;$i<=4;$i++)
	{
		for($j=0;$j<=8;$j=$j+4)
		echo $i+$j." ";
		echo "<br>";
	}
?>

<?php
	echo "<br><br>";
	$k=1;
	for($i=0;$i<5;$i++)
	{
			for($j=0;$j<=$i;$j++)
			{
				echo $k." ";
				$k++;
			}
			echo "<br>";
	}
?>

