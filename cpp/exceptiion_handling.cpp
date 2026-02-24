void process_input(int n) {
      try {
        int d = largest_proper_divisor(n);
        std::cout << "result=" << d << std::endl;
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "returning control flow to caller" << std::endl;
}
