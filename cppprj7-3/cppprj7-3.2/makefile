# makefile
# this is comment

# 컴파일러 설정
CX = g++
FLAGS = -g -Wall   # 디버그모드 컴파일, 모든 경고메세지 출력

# 변수에 자주 쓸 문자열 저장 룰에서 쓸 때는 $(변수명)
OBJECTS= complex.o main.o
TARGET = test


# 룰 양식
#	만들 파일 이름 : 소스 코드(목적 파일.o)
#	tap + 레시피(실행해야 할 명령어)

# 실행파일 (필수적으로 링킹 룰 먼저 정의)
$(TARGET) : $(OBJECTS) 
	$(CX) -o $(TARGET) $(OBJECTS)


# 룰 양식
# 	만들 오브젝트 파일 이름 : 명령어 실행 전 체크해야 할 코드 파일
#	tap + 레시피(실행해야 할 명령어)

# 목적파일 (컴파일)
main.o : main.cpp complex.h
	$(CX) $(FLAGS) -c main.cpp

complex.o : complex.cpp complex.h
	$(CX) $(FLAGS) -c complex.cpp


.PHONY: clean # 거짓 타겟 선언 (룰 X 명령 단축어)
# 빌드 과정에서 생성되는 파일 제거
clean :
	rm -f $(TARGET) $(OBJECTS) 
