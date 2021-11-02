template<typename K, typename T> /* K key, T value*/
class HashPair{
  public:
    K key;
    T value;
    HashPair(K key, T value ){
      this->key = key;
      this->value  = value;
    }
     HashPair(){}

};

template<typename K, typename T> /* K key, T value*/
class Hashtable{
    private:
        int size;
        HashPair<K, T> * tabla;
        
        int fh(K key){
            hash<K> khash;
            return khash(key) % size;
        }
    public:
      Hashtable(int size = 20){
        this->size = size;
        tabla = new HashPair<K,T>[size];
        for(int i = 0; i < size; i++)
          tabla[i] = HashPair<K,T>();
      }
      ~Hashtable(){
        delete tabla;
        size = 0;
      }

      bool put(K key, T value){
         int posicion = fh(key);

         tabla[posicion] = HashPair<K,T>(key, value);
         return 1;
      }

      T get(K key){
        return tabla[fh(key)].value;
      }

      void print(){
        for(int i = 0; i < size; i++){
          cout <<"i: " << i << " k: " << tabla[i].key  << "  " << tabla[i].value;
          cout << endl;
        }
      }
      void clear(){
        for(int i = 0; i < size; i++){
          tabla[i].key = tabla[i].value = 0;
        }
      }
      bool contains_key(K k){
        for(int i = 0; i < size; i++) if(tabla[i].key == k) return true;
        return false;
      }

      T get_or_default(K k, T def = "none"){
        if(contains_key(k) == 0) return def;
        for(int i = 0; 9 <)
      }

      // use the get function
//void clear()
};