/*
	C++ 입출력 시스템
	- 스트림(stream) 입출력
	   : 흐르는 시냇물
	   : 데이터의 흐름이나 데이터를 제어하는 신호의 흐름 - 통로
	   : 출입구 => 입력 스트림, 출력 스트림
	   : 입출력 기본 단위 : 바이트(byte)
		 (숫자, 영문자, 특수문자 - 1byte)   (한글, 한자 - 2byte) 
	   : 스트림 버퍼(buffer)을 가진다.
	   : 임시기억장소 => 처리속도를 보안              
	     버퍼, 클립보드(clipboard) - ctrl+c등, 캐시메모리(cache memory)
		                                       듀얼 - 캐시가 4개, 팬티엄 - 캐시가 2개
	
	- ios(최상위 클래스) = istream(입력 통로) - 하위클래스, ostream(출력 통로) => iostream(fstream - 파일)
	
	- ostream의 멤버 함수(ofstream)
	  : put(char ch) - 문자를 출력, write(char * str, int n) - 문자열에서 n개만큼 출력, flush() - 버퍼 내용 강제 출력 
	
	- istream의 멤버 함수(ifstream - input file stream) 
	  : int get()      -> 문자를 읽어오는데 오류나 EOF(End Of File -파일의 끝 , -1 반환) 
	  : istream& get(char & ch) -> 문자를 읽어 ch에 저장
	  : istream& get(char* s, int n) 
	    입력스트림을 통해 n-1개의 문자를 읽어 배열 s에 저장하고, 
		마지막에 '\0'(null string) 문자 삽입 <'\n'을 만나면 '\0'삽입하고 리턴> - '\n' strig 버퍼가 걸릴 수 있다.
	
	- 포멧(format, 서식) 입출력 방법
	  : C언어 printf =print + format, 출력서식에 맞게 출력하라 => C++ 오면서 없어짐
	  : 출력서식(%) => %d, %c, %f, %s 
	  : 출력서식 지정 - 포맷 플래그, 포맷 함수, 조작자

	- 조작자 => 오버라이딩(재정의)
	- 삽입연산자(<<)와 추출연산자(>>) => 오버라이딩(재정의)
	  : cin - istream, cout(출력), cerr(출력) - 오류 메세지 출력할때, clog(출력)
*/

