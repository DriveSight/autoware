/*
 * MeidaiBag.h
 *
 *  Created on: Aug 10, 2018
 *      Author: sujiwo
 */


#include <string>
#include <rosbag/bag.h>
#include "datasets/GenericDataset.h"


#ifndef _MEIDAIBAG_H_
#define _MEIDAIBAG_H_


class MeidaiDataItem : public GenericDataItem
{
};


class MeidaiBag : public GenericDataset
{
public:

	MeidaiBag(const std::string &filePath);
	virtual ~MeidaiBag();

	size_t size() const;

	CameraPinholeParams getCameraParameter();

	cv::Mat getMask();

	MeidaiDataItem& at(dataItemId i) const;

protected:
	static std::string dSetName;
};

#endif /* _MEIDAIBAG_H_ */
