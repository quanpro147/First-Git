#pragma once
/*
#include <ctime.h>
I. dạng dữ liệu
1. time_t
2. struct tm
3. clock_t
4. size_t
II. một số hàm quan trọng
1. time(); : trả về thời gian từ ngày nào đó
2. ctime(); trả về con trỏ chuỗi định dạng thời gian
3. localtime(localtime_s); : trả về con trỏ thời gian dưới dạng cấu trúc
4. clock; : tính thời gian xấp xỉ mà ct đã chạy 
III. một số hàm phụ
1. sleep() : 
IV. ví dụ
	time_t now=time(0);
	struct tm t;
	localtime_s(&t, &now);
	int hour= t.tm_hour;
	int minute = t.tm_min;
	int second = t.tm_sec;
	int year = t.tm_year; (khi in ra +1900)
	int month = t.tm_mon; (khi in ra +1)
	int day = t.tm_mday;
	(ở trên là hàm đã lưu thời gian trên máy tính vào các biến tương ứng)
*/