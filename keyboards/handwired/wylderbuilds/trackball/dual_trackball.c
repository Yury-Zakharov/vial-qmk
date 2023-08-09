#include "dual_trackball.h"

#ifdef CONSOLE_ENABLE
#include "print.h"
#endif

report_mouse_t pointing_device_task_combined_user(report_mouse_t left_report, report_mouse_t right_report) {
#ifdef CONSOLE_ENABLE
    print("in pointing device task combined user\n");
#endif
    left_report.h = left_report.x;
    left_report.v = left_report.y;
    left_report.x = 0;
    left_report.y = 0;
    return pointing_device_combine_reports(left_report, right_report);
}