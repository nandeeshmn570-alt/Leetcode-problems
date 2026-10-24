class BusBooking {
public:
    vector<vector<int>> seats;
    vector<vector<int>> costs;
    int totalTime = 0;
    int occupiedCount = 0;

    BusBooking(int n) {
        seats = vector<vector<int>>(n, vector<int>(4, 0));
        costs = vector<vector<int>>(n, vector<int>(4, 0));
    }

    void toggle(string seat) {
        int col = seat[0] - 'A';
        int row = stoi(seat.substr(1)) - 1;

        if (seats[row][col] == 0) {
            seats[row][col] = 1;
            occupiedCount++;

            if (col == 0 && seats[row][1] == 1) {
                totalTime += 3;
                costs[row][col] = 3;
            } 
            else if (col == 3 && seats[row][2] == 1) {
                totalTime += 3;
                costs[row][col] = 3;
            } 
            else {
                totalTime += 1;
                costs[row][col] = 1;
            }
        } 
        else {
            totalTime -= costs[row][col];
            costs[row][col] = 0;
            seats[row][col] = 0;
            occupiedCount--;
        }
    }

    int getTotalTime() {
        return totalTime;
    }

    int getMinTime() {
        return occupiedCount;
    }
};