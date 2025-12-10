/**
 * @class MyClass
 * @brief A simple example class.
 *
 * This class demonstrates basic object-oriented principles with a member variable
 * and a member function.
 */
class MyClass {
public:
	/**
     * \~english @brief Enumerator example
     * 
     * \~russian @brief Пример перечисления
	 */
	enum Scale
	{
		first = 5,  	/**< \~english Первый элемент 
                             \~russian First element */
        second = 0,  	/**< \~russian Second element 
                             \~english Второй элемент */
		third = 3,		/**< Диапазон &plusmn;  8g */
		fourth = 1, 	/**< Диапазон &plusmn;  16g */
        elevenG = 4 	/**<  &plusmn;  16g */
	};

    /**
     * @brief Constructs a MyClass object with an initial value.
     * @param initialValue The value to initialize the member variable with.
     */
    MyClass(int initialValue);

    /**
     * @brief Sets the value of the internal data.
     * @param newValue The new value to set.
     */
    void setValue(int newValue);

    /**
     * @brief Retrieves the current value of the internal data.
     * @return The current value.
     */
    int getValue() const;

private:
    int m_data; ///< @brief The internal data of the class.
};