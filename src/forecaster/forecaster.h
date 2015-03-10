/* 
 * File:   forecaster.h
 * Author: Florian
 *
 * Created on 9 mars 2015, 22:29
 */

#ifndef FORECASTER_H
#define	FORECASTER_H

#include "util/price.h"
#include "publisher/md_tick.h"

class forecaster{
public:
    forecaster(double m_threshold): threshold(m_threshold){
        
    }
    
    void handle_market_data_tick(md_tick * tick);
    
    
private:
    double threshold;
    
};

#endif	/* FORECASTER_H */

