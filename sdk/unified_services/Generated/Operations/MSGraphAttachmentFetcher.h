/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSGraphFileAttachmentFetcher;
@class MSGraphItemAttachmentFetcher;
@class MSGraphReferenceAttachmentFetcher;
@class MSGraphAttachmentOperations;
@class MSGraphAttachmentFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphAttachmentFetcher.
*/

@protocol MSGraphAttachmentFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSGraphAttachment *attachment, MSOrcError *error))callback;
- (MSGraphAttachmentFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphAttachmentFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphAttachmentFetcher *)select:(NSString *)params;
- (MSGraphAttachmentFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphAttachmentOperations *operations;

@end

@interface MSGraphAttachmentFetcher : MSOrcEntityFetcher<MSGraphAttachmentFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSGraphAttachment *)attachment callback:(void(^)(MSGraphAttachment *attachment, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;

- (MSGraphFileAttachmentFetcher *)asFileAttachment;	
- (MSGraphItemAttachmentFetcher *)asItemAttachment;	
- (MSGraphReferenceAttachmentFetcher *)asReferenceAttachment;	

@end