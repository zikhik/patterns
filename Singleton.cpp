class Singleton
{
  public:
    static Singleton& Instance()
    {
        // согласно стандарту, этот код  потокобезопасный
        static Singleton s;
        return s;
    }

  private:
    Singleton() { ... }  // конструктор недоступен
    ~Singleton() { ... } // и деструктор

    // необходимо также запретить копирование
    Singleton(Singleton const&) = delete; // реализация не нужна
    Singleton& operator= (Singleton const&) = delete;  // и тут
};
