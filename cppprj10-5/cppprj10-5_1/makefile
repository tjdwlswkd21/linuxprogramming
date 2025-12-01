# 컴파일러 설정
CX = g++
FLAGS = -g -Wall   # 디버그모드 컴파일, 모든 경고메세지 출력

# 변수에 자주 쓸 문자열 저장
OBJECTS = main.o  # 이제 main.o만 필요
TARGET = test     # 실행파일 이름

# 실행파일 (필수적으로 링킹 룰 먼저 정의)
$(TARGET) : $(OBJECTS) 
	$(CX) -o $(TARGET) $(OBJECTS)

# 목적파일 (컴파일)
main.o : main.cpp
	$(CX) $(FLAGS) -c main.cpp

# clean: 빌드 과정에서 생성된 파일 삭제
.PHONY: clean
clean :
	rm -f $(TARGET) $(OBJECTS)

