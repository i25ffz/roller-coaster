RollerCoaster
=============
Roller Coaster benchmark for android.

Base from opengl es resource (http://www.khronos.org/opengles/resources) Roller Coaster (http://plusplus.free.fr/rollercoaster/) project(build with gradle or android studio 1.5+).

###ASAN

 - ndk-build CLANG_ASAN=1 (ndk ver >= r11, only testing with r13)
 - adb push asanwrapper /data/local/tmp/
 - adb push libs/armeabk-v7a/libclang_rt.asan-arm-android.so /data/local/tmp/
 - adb shell su -c 'mount -o remount,rw /system'
 - adb shell su -c 'mv /data/local/tmp/asanwrapper /system/bin'
 - adb shell su -c 'mv /data/local/tmp/libclang_rt.asan-arm-android.so /system/lib'
 - adb shell su -c 'chmod 755 /system/bin/asanwrapper'
 - adb shell su -c 'chmod 644 /system/lib/libclang_rt.asan-arm-android.so'
 - adb shell su -c 'setprop wrap.com.example.rollercoaster "logwrapper /system/bin/asanwrapper"'
 - adb shell mkdir /sdcard/asan

REF: https://github.com/google/sanitizers/wiki