template <class T>
class stack
{
public:
    stack(int = 10);
    ~stack() { delete[] stackptr; }
    int push(const T &);
    int pop(T &);

private:
    int size;
    int top;
    T *stackptr;
    int isEmpty() const { return top == -1; }
    int isFull() const { return top == size - 1; }
};
//******
template<class T>
int stack<T>::pop(T &popValue)
{
    if (!isEmpty())
    {
        popValue = stackptr[top--];
        return 1;
    }
    return 0;
}