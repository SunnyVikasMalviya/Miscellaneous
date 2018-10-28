<?php
class M
{
	static $msg="Static method working";
}
class N extends M
{
	public static function show()
	{
		echo M::$msg;
	}
}
N::show();
?>