//
// Created by HominSu on 2021/5/2.
//

#ifndef HTP_PLATFORM_MACHINE_ROBOT_INTERNAL_DATA_MOTOR_MOTOR_CONFIG_MOTOR_PATH_H_
#define HTP_PLATFORM_MACHINE_ROBOT_INTERNAL_DATA_MOTOR_MOTOR_CONFIG_MOTOR_PATH_H_

//注意默认为常开，但是需要常闭，参数值加0x80
///< 控制器的 Dio 预设
const unsigned short kMotorDio[] = {
    0x0088, 0x0027, 0x0025, 0x0026, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

///< 电机的运动方向和峰值电流预设
const unsigned short kMotorBasic[] = {
    0x0000, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

//每一行为一个路径
//1 运动模式路径控制器  2 位置H  3 位置L 4 运行速度 5 加速时间  6 减速时间
//7 停顿时间  8 特殊参数
///< PR 路径预设
const unsigned short kMotorProcedure[] = {
    0x0001, 0x0000, 0x16e0, 0x012c, 0x0064, 0x0064, 0x0000, 0x0000,
    0x0041, 0x0000, 0x2710, 0x012c, 0x0064, 0x0064, 0x0000, 0x0000,
    0x0041, 0xFFFF, 0xD8F0, 0x012c, 0x0064, 0x0064, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

//1PR控制设置 2正限位H  3正限位L 4负限位H 5负限位L 6 回零模式 7 回零位置H  8回零位置L
//9回零指定位置H,10回零指定位置L，11回零高速 12回零低速 13回零加速时间 14回零低速时间 15 限位急停时间 16 STOP急停时间
///< 控制器回零预设
const unsigned short kMotorZRN[] = {
    0x0000, 0x001e, 0x8480, 0xffe1, 0x7b80, 0x0007, 0x0000, 0x0000,
    0xFFF8, 0x37D0, 0x0064, 0x000a, 0x0064, 0x0064, 0x0064, 0x0032
};

#endif //HTP_PLATFORM_MACHINE_ROBOT_INTERNAL_DATA_MOTOR_MOTOR_CONFIG_MOTOR_PATH_H_