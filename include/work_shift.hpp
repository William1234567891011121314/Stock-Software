#include <chrono>

class WorkShift {
private:
	//work days
	std::chrono::weekday weekDayStart;
	std::chrono::weekday weekDayEnd;
	//work time
	std::chrono::hh_mm_ss<std::chrono::hours> hourStart;
	std::chrono::hh_mm_ss<std::chrono::hours> hourEnd;
	//days off
	std::chrono::weekday nextDayOff;
	std::chrono::time_point<std::chrono::steady_clock> vacationStart;
	std::chrono::time_point<std::chrono::steady_clock> vacationEnd;

public:
	std::chrono::weekday getWeekDayStart();
	std::chrono::weekday getWeekDayEnd();
	std::chrono::hh_mm_ss<std::chrono::hours> getHourStart();
	std::chrono::hh_mm_ss<std::chrono::hours> getHourEnd();
	std::chrono::weekday getNextDayOff();
	std::chrono::time_point<std::chrono::steady_clock> getVacationStart();
	std::chrono::time_point<std::chrono::steady_clock> getVacationEnd();

	void setWeekdayStart(std::chrono::weekday* weekDayStart);
	void setWeekDayEnd(std::chrono::weekday* weekDayEnd);
	void setHourStart(std::chrono::hh_mm_ss<std::chrono::hours>* hourStart);
	void setHourEnd(std::chrono::hh_mm_ss<std::chrono::hours>* hourEnd);
	void setNextDayOff(std::chrono::weekday* nextDayOff);
	void setVacationStart(std::chrono::time_point<std::chrono::steady_clock>* vacationStart);
	void setVacationEnd(std::chrono::time_point<std::chrono::steady_clock>* vacationEnd);
};