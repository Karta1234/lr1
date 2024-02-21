#include <lib/lr1.h>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Подробнее https://google.github.io/googletest/reference/testing.html

// Тестовый класс
class FindPairTest : public ::testing::Test {
protected:
    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    void SetUp() override {
        // Например, инициализация данных
        arr = {10, 14, 15, 20, 21, 25, 30};
    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {
        // Например, очистка данных
        arr.clear();
    }

    // Объявляем переменные, которые будут использоваться в тестах
    std::vector<int> arr;
    int result;
};

// Пример теста1
TEST_F(FindPairTest, CTest1) {
    result = findPair(arr);

    EXPECT_EQ(result, 2);
}

// Пример теста111111
TEST_F(FindPairTest, CTest11111) {
    result = findPair(arr);

    EXPECT_EQ(result, 2);
}

// Пример теста 2
TEST_F(FindPairTest, CTest2) {
    result = findPair(arr);

    EXPECT_EQ(result, 2);
}

// Пример теста3
TEST(FindPairTest1, CTest3) {
    std::vector<int> arr;
    int result;
    arr = {10, 14, 15, 20, 21, 25, 30, 35, 5};
    result = findPair(arr);

    EXPECT_EQ(result, 3);
}
