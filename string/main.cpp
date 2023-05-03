#include <iostream>
#include "string.h"

int main()
{
	String s1 = "⊂_ヽ";
	String s2 = "  ＼＼   Λ＿Λ"; //String s2("just the way you are");
	String s3 = "    ＼( ‘ㅅ’ ) 두둠칫";						//String s3(s2);
	String s4 = "      >   ⌒ヽ";
	String s5 = "     /    へ ＼";
	String s6 = "    /    /  ＼＼";
	String s7 = "    ﾚ　ノ　　ヽ_つ";
	String s8 = "   /  /두둠칫";
	String s9 = "  /  /|";
	String s10 = " (  ( ヽ";
	String s11 = "	| |、＼";
	String s12 = " | 丿 ＼ ⌒)";
	String s13 = " | |    ) / ";
	String s14 = "`ノ )　　Lﾉ	";


	//s1 = s2 = s2;
	if (s1 == s2) {
		std::cout << "s1 and s2 are equal" << std::endl;
	} else {
		std::cout << "s1 and s2 are not equal" << std::endl;
	}
	
	/*
	String s4 = " - Bruno Mars ";
	s1 = s2 + s4;
	
	s4 = "wonderful tonight";		//string tmp ("wonderful tonight"); s4.operator = (tmp) ~String();
	*/
	
	//std::cout << "s1 :  " << s1.c_str() << std::endl;
	std::cout << "s1 :  " << s1 << std::endl;
	std::cout << "s2 :  " << s2 << std::endl;
	std::cout << "s3 :  " << s3 << std::endl;
	std::cout << "s4 :  " << s4 << std::endl;
	std::cout << "s5 :  " << s5 << std::endl;
	std::cout << "s6 :  " << s6 << std::endl;
	std::cout << "s7 :  " << s7 << std::endl;
	std::cout << "s8 :  " << s8 << std::endl;
	std::cout << "s9 :  " << s9 << std::endl;
	std::cout << "s10 :  " << s10 << std::endl;
	std::cout << "s11 :  " << s11 << std::endl;
	std::cout << "s12 :  " << s12 << std::endl;
	std::cout << "s13 :  " << s13 << std::endl;
	std::cout << "s14 :  " << s14 << std::endl;
	
	
	std::cout << "s1 len :  " << s1.size() << std::endl;
	return 0;
}
