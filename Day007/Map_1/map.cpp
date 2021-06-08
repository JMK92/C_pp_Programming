/*
	map 컨테이너
	- 키와 값의 쌍을 원소로 저장하는 컨테이너
	- 키는 중복을 허용하지 않는다.
*/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	map<string, string> dic;   // 입력값, 출력값

	// 요소 삽입
	dic.insert(make_pair("love", "사랑")); // love : 키, 사랑 : 값
	dic.insert(make_pair("dream", "꿈"));
	dic.insert(make_pair("dog", "강아지"));
	dic["cherry"] = "체리";
	dic["cat"] = "고양이"; 
	
	/*
	string kor1 = dic["dog"];
	string kor2 = dic.at("dream");

	cout << kor1 << ", " << kor2 << endl;*/

	cout << "저장된 단어 개수 : " << dic.size() << endl;

	// 키를 입력받아 해당 값을 출력하는 로직
	string eng;

	while (true) {
		cout << "찾을 단어 = ";
		//cin >> eng;
		getline(cin, eng);   // 구분자 사용안해도 됨.
		if (eng == "exit") break;

		/*
			find(key_type & key) : iterator 리턴
			맵에서 '키'에 해당하는 원소를 가르키는 반복자를 리턴
		*/
		if (dic.find(eng) == dic.end())  // eng가 dict 끝까지 검색했다면
			cout << eng << "는 사전에 없어요" << endl;
		else
			cout << dic[eng] << endl;
	}

	return 0;
}