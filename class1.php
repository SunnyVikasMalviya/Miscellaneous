<?php
class A
{
	public $a=10;
	private $b=20;
	protected $c=30;
	public function show()
	{
		echo $this->a."<br>".$this->b."<br>".$this->c."<br>";
	}
	public function Hello()
	{
		return "Hello<br>";
	}	
	private function Hi()
	{
		return "Hi<br>";
	}
	protected function Hola()
	{
		return "Hola<br>";
	}
	public function all()
	{
		echo $this->Hello();
		echo $this->Hi();
		echo $this->Hola();
	}
}
$eg=new A();
echo $eg->a;
$eg->a++;
$eg->show();
?>
<?php
$eg->all();
?>