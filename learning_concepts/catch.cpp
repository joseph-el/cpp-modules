

using namespace std;

int main() {
    int x = 2;

    try {
        if (x == 2)
            throw (char)2;
        cout << "IAM HERE" << endl;
    }
    catch (float){
        puts(":SS");
    }
    catch (int){
        puts(":DD");
    }
    catch (short){
        puts("*KJ");
    }
    catch (...) {
        puts("NOT");
    }
}