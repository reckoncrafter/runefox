#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

	map<char,string> toRunes{
		{'A', "ᚨ"}, // ANSUZ ᚨ
		{'B', "ᛒ"}, // BERKANAN ᛒ
		{'C', "ᛢ"}, // CWEORTH ᛢ
		{'D', "ᛞ"}, // DAGAZ ᛞ
		{'E', "ᛖ"}, // EHWAZ ᛖ
		{'F', "ᚠ"}, // FEHU ᚠ
		{'G', "ᚷ"}, // GEBO ᚷ
		{'H', "ᚺ"}, // HAGLAZ ᚺ
		{'I', "ᛇ"}, // IWAZ ᛇ
		{'J', "ᛃ"}, // JERAN ᛃ
		{'K', "ᚲ"}, // KAUNA ᚲ
		{'L', "ᛚ"}, // LAUKAZ ᛚ
		{'M', "ᛗ"}, // MANNAZ ᛗ
		{'N', "ᚾ"}, // NAUDIZ ᚾ
		{'O', "ᛟ"}, // OTHALAN ᛟ
		{'P', "ᛈ"}, // PERTHO ᛈ
		{'Q', "ᛩ"}, // MEDIEVAL Q ᛩ
		{'R', "ᚱ"}, // RAIDO ᚱ
		{'S', "ᛊ"}, // SOWILO ᛊ
		{'T', "ᛏ"}, // TIWAZ ᛏ
		{'U', "ᚢ"}, // URUZ ᚢ
		{'V', "ᚡ"}, // MEDIEVAL V ᚡ
		{'W', "ᚹ"}, // WUNJO ᚹ
		{'X', "ᛪ"}, // MEDIEVAL X ᛪ
		{'Y', "ᚤ"}, // MEDIEVAL Y ᚤ
		{'Z', "ᛉ"}, // ALGIZ ᛉ
	};
	map<string, string> toRunesDiac{
		{"NG", "ᛜ"}, // INGWAZ ᛜ
		{"TH", "ᚦ"}, // THURISAZ ᚦ
	};
	
	char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	while(true){
		string line = "";
		getline(cin, line);
		
		for(int i = 0; i < line.length(); i++){
			char current = toupper(line[i]);
			string pair = "";
			pair += toupper(line[i]);
			pair += toupper(line[i+1]);
			
			if (toRunesDiac.find(pair) != toRunesDiac.end()){
				cout << toRunesDiac[pair];
				i++;
			}
			else if (toRunes.find(current) != toRunes.end()){
				cout << toRunes[current];
			}
			else{
				cout << current;
			}
		}
		if( cin.eof() != 0 ){
			break;
		}
		cout << endl;
	}
		
	return 0;
	
}
