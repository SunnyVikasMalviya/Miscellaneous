<?php
class A
{
	public function t()
	{
		echo "Parent Class.<br>";
	}
}
class B extends A
{
	public function t($arg)
	{
		echo $arg."<br>";
	}
}
$obj=new B();
$obj->t("derived class object");
?>