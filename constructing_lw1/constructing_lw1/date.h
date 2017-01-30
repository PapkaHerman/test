#pragma once
class date
{
private:
	int day;
	int month;
	int year;
public:
	void set_day(int day) { this->day = day; }
	void set_month(int month) { this->month = month; }
	void set_year(int year) { this->year = year; }
	int get_day() { return day; }
	int get_month() { return month; }
	int get_year() { return year; }
	date() {};
	~date() {};
	date(int day, int month, int year) { this->day=day; this->month=month; this->year=year; }
};

class time {
private:
	int hour;
	int minute;
	int sec;
public:
	void set_hour(int hour) { this->hour = hour; }
	void set_minute(int minute) { this->minute = minute; }
	void set_sec(int sec) { this->sec = sec; }
	int get_hour() { return hour; }
	int get_minute() { return minute; }
	int get_sec() { return sec; }
	time() {};
	~time() {};
	time(int hour, int minute, int sec) { this->hour = hour; this->minute = minute; this->sec = sec; }
};