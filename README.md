# Gtest setup - CLion

1. Download/Clone Google Test from GitHub
1. Create a new project in CLion named `google_test_probe`
1. Create a directory named `lib` in the project's root directory

        mkdir -p ~/CLionProjects/google_test_probe/lib/googletest


1. Copy the downloaded Google Test directory to the `lib` directory

        cp -r googletest/* ~/CLionProjects/google_test_probe/lib/googletest/

1. Continue along with [this video tutorial](https://www.youtube.com/watch?v=M067vFQG7ZA). Slight modifications are needed.
For full project see

## Sources

https://www.jetbrains.com/help/clion/creating-google-test-run-debug-configuration-for-test.html

https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html

https://stackoverflow.com/questions/33638433/setup-google-test-in-clion/34558470#34558470

https://stackoverflow.com/questions/33638433/setup-google-test-in-clion/44870138#44870138

https://stackoverflow.com/questions/26030700/unit-testing-c-setup-and-teardown/26034482#26034482

https://meekrosoft.wordpress.com/2009/10/04/testing-c-code-with-the-googletest-framework/