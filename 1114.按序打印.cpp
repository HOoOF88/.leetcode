/*
 * @lc app=leetcode.cn id=1114 lang=cpp
 *
 * [1114] 按序打印
 */

// @lc code=start
class Foo {
public:
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        cv1.notify_all();
    }

    void second(function<void()> printSecond) {
        unique_lock<mutex> lck(mtx1);
        cv1.wait(lck);
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        cv2.notify_all();
    }

    void third(function<void()> printThird) {
        unique_lock<mutex> lck(mtx2);
        cv2.wait(lck);
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
// @lc code=end

