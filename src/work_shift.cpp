#include <chrono>

#include "../include/work_shift.hpp"

//getters

std::chrono::weekday WorkShift::getWeekDayStart() {
    return weekDayStart;
}

std::chrono::weekday WorkShift::getWeekDayEnd() {
    return weekDayEnd;
};

std::chrono::hh_mm_ss<std::chrono::hours> WorkShift::getHourStart() {
    return hourStart;
}

std::chrono::hh_mm_ss<std::chrono::hours> WorkShift::getHourEnd() {
    return hourEnd;
}

std::chrono::weekday WorkShift::getNextDayOff() {
    return nextDayOff;
}

std::chrono::time_point<std::chrono::steady_clock> WorkShift::getVacationStart() {
    return vacationStart;
}

std::chrono::time_point<std::chrono::steady_clock> WorkShift::getVacationEnd() {
    return vacationEnd;
}

//setters

void WorkShift::setWeekdayStart(std::chrono::weekday* weekDayStart) {
    this->weekDayStart = *weekDayStart;
}

void WorkShift::setWeekDayEnd(std::chrono::weekday* weekDayEnd) {
    this->weekDayEnd = *weekDayEnd;
}

void WorkShift::setHourStart(std::chrono::hh_mm_ss<std::chrono::hours>* hourStart) {
    this->hourStart = *hourStart;
}

void WorkShift::setHourEnd(std::chrono::hh_mm_ss<std::chrono::hours>* hourEnd) {
    this->hour = *hourEnd;
}

void WorkShift::setNextDayOff(std::chrono::weekday* nextDayOff) {
    this->nextDayOff = *nextDayOff;
}

void WorkShift::setVacationStart(std::chrono::time_point<std::chrono::steady_clock>* vacationStart) {
    this->vacationStart = *vacationStart;
}

void WorkShift::setVacationEnd(std::chrono::time_point<std::chrono::steady_clock>* vacationEnd) {
    this->vacationEnd = *vacationEnd;
}