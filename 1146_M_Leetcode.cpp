class SnapshotArray
{
public:
    vector<map<int, int>> map;
    int snapId = 0;

    SnapshotArray(int length)
    {
        map.clear();
        map.resize(length);
        for (int i = 0; i < length; i++)
            map[i][0] = 0;
    }

    void set(int index, int val)
    {
        map[index][snapId] = val;
    }

    int snap()
    {
        snapId++;
        return snapId - 1;
    }

    int get(int index, int snap_id)
    {
        int temp = snap_id;
        while (temp >= -1)
        {
            if (map[index].find(temp) == map[index].end())
            {
                temp--;
            }
            else
            {
                return map[index][temp];
            }
        }
        return 0;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */