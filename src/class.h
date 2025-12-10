/**
 * @class MyClass
 * \~english @brief A simple example class.
 *
 * \~english This class demonstrates basic object-oriented principles with a member variable
 * \~english and a member function.
 * 
 * \~russian @brief Демонстрационный класс.
 * 
 * \~russian Этот класс демонстрирует основные принципы объектно-ориентированного программирования
 * \~russian через поле и методы доступа. 
 */
class MyClass {
public:
	/**
     * \~english @brief Enumerator example
     * \~russian @brief Пример перечисления
	 */
	enum Scale
	{
		first = 5,  	/**< \~english Первый элемент 
                             \~russian First element */
        second = 0,  	/**< \~english Second element 
                             \~russian Второй элемент */
		third = 3,		/**< \~english Third element 
                             \~russian Третий элемент */
		fourth = 1, 	/**< \~english Fourth element 
                             \~russian Четвёртый элемент */
        elevenG = 4 	/**< \~english %Scale &plusmn; 11g
                             \~russian Диапазон &plusmn; 11g */
	};

    /**
     * \~english @brief Constructs a MyClass object with an initial value.
     * \~english @param initialValue The value to initialize the member variable with.
     * 
     * \~russian @brief Создание объекта класса MyClass с заданным значением.
     * \~russian @param initialValue Начальное значение внутреннего параметра.
     */
    MyClass(int initialValue);

    /**
     * \~english @brief Sets the value of the internal data.
     * \~english @param newValue The new value to set.
     * 
     * \~russian @brief Устанoвить значение внутреннего параметра
     * \~russian @param newValue Новое значение параметра
     */
    void setValue(int newValue);

    /**
     * \~english @brief Retrieves the current value of the internal data.
     * \~english @return The current value.
     *
     * \~russian @brief Получить значение внутреннего параметра
     * \~russian @return Значение параметра
     */
    int getValue() const;

private:
    int m_data; /*/< \~english @brief The internal data of the class.
                     \~russian @brief Внутреннее значение класса */
};