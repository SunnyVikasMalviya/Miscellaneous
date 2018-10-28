<?php
class P
{
	public function t()
	{
		echo "Parent Class.<br>";
	}
	public function t1()
	{
		echo "t1 method<br>";
	}
}
class Q
{
	public function t()
	{
		echo "child class<br>";
	}
}
$obj=new P();
$obj->t();
$obj->t1();
$obj=new Q();
$obj->t();
?>