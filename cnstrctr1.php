<?php
class A
{
public $name="No Name";
public function __construct($name)
{
	$this->name=$name;
}
public function __destruct()
{}
//echo $a->name;
}
$a=new A("Sai Ram");
echo $a->name;

?>