# 컴파일러 설정
CX = g++              # 사용할 컴파일러
FLAGS = -g -Wall      # 디버깅 모드와 경고 메시지 출력

# 최종 실행 파일 이름
TARGET = test

# 소스 파일
SRCS = main.cpp

# 오브젝트 파일
OBJECTS = main.o

# 실행 파일을 생성하는 규칙
$(TARGET): $(OBJECTS)
	$(CX) -o $(TARGET) $(OBJECTS)

# 오브젝트 파일을 컴파일하는 규칙
main.o: main.cpp
	$(CX) $(FLAGS) -c main.cpp -o main.o

# clean: 빌드된 파일들 삭제
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS)  # 실행 파일과 오브젝트 파일 삭제
