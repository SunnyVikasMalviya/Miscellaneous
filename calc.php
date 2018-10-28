<?php
class A
{
	private function sum($a,$b)
	{	return $a+$b;}
	private function sub($a,$b)
	{	return $a-$b;}
	private function mul($a,$b)
	{	return $a*$b;}
	private function div($a,$b)
	{	return $a/$b;}
	function calc($x,$y)
	{
		echo $this->sum($x,$y)."<br>";
		echo $this->sub($x,$y)."<br>";
		echo $this->mul($x,$y)."<br>";
		echo $this->div($x,$y)."<br>";
		echo "<br>";
	}
}
$obj=new A();
$obj->calc(20,4);
$obj->calc(15,5);
?>