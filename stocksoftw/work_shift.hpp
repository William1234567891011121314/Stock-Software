#include <chrono>
#include <vector>

class WorkShift {
private:
	//work days
	std::chrono::weekday weekDayInit;
	std::chrono::weekday weekDayEnd;
	//work time
	std::chrono::hh_mm_ss<std::chrono::hours> hourInit;
	std::chrono::hh_mm_ss<std::chrono::hours> hourEnd;
	//days off
	std::chrono::weekday nextDayOff;
	std::chrono::time_point<std::chrono::steady_clock> vacationInit;
	std::chrono::time_point<std::chrono::steady_clock> vacationEnd;

public:
	std::chrono::weekday getWeekDayInit();
	std::chrono::weekday getWeekDayEnd();
	std::chrono::hh_mm_ss<std::chrono::hours> getHourInit();
	std::chrono::hh_mm_ss<std::chrono::hours> getHourEnd();
	std::chrono::weekday getNextDayOff();
	std::chrono::time_point<std::chrono::steady_clock> getVacationInit();
	std::chrono::time_point<std::chrono::steady_clock> getVacationEnd();

	void setWeekdayInit();
	void setWeekDayEnd();
	void setHourInit();
	void setHourEnd();
	void setNextDayOff();
	void setVacationInit();
	void setVacationEnd();
};