class MyHashMap {
public:
    vector<int>data;
    MyHashMap() {
        data.resize(10000000);
        fill(data.begin(),data.end(),-1);
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        int x = data[key];
        return x;
    }
    
    void remove(int key) {
        data[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */