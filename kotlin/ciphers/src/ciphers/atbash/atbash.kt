package ciphers.atbash

fun encode(str: String):String {
	var output:String = ""
	for(c:Char in str){
		when(c){
			in 'A'..'Z' -> output += (('A'+'Z'.toInt())-c).toChar()
			in 'a'..'z' -> output += (('a'+'z'.toInt())-c).toChar()
			else -> output += c
		}
	}
	return output
}