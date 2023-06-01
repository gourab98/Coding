class UndergroundSystem {
        unordered_map<int, pair<string, int>> arrivalInfo; // Customer id -> {stationName, arrivalTime}
        unordered_map<string, pair<int,int>> routeInfo;    // start:end -> {total time, number of customers}
public:
    UndergroundSystem() {
        arrivalInfo.clear();
        routeInfo.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        arrivalInfo[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string startStation = arrivalInfo[id].first;
        int startTime = arrivalInfo[id].second;

        string key = startStation+':'+stationName;
        routeInfo[key].first += (t-startTime);
        routeInfo[key].second++;

        arrivalInfo.erase(id);   // Delete this customer information
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto &x =routeInfo[startStation+':'+endStation];
        return (double)x.first/(double)x.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */