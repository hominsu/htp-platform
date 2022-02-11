// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.27.1
// 	protoc        v3.19.4
// source: v1/capture.proto

package v1

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type ReadOneRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id int64 `protobuf:"varint,1,opt,name=id,proto3" json:"id,omitempty"`
}

func (x *ReadOneRequest) Reset() {
	*x = ReadOneRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_v1_capture_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ReadOneRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ReadOneRequest) ProtoMessage() {}

func (x *ReadOneRequest) ProtoReflect() protoreflect.Message {
	mi := &file_v1_capture_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ReadOneRequest.ProtoReflect.Descriptor instead.
func (*ReadOneRequest) Descriptor() ([]byte, []int) {
	return file_v1_capture_proto_rawDescGZIP(), []int{0}
}

func (x *ReadOneRequest) GetId() int64 {
	if x != nil {
		return x.Id
	}
	return 0
}

type ReadAllRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *ReadAllRequest) Reset() {
	*x = ReadAllRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_v1_capture_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ReadAllRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ReadAllRequest) ProtoMessage() {}

func (x *ReadAllRequest) ProtoReflect() protoreflect.Message {
	mi := &file_v1_capture_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ReadAllRequest.ProtoReflect.Descriptor instead.
func (*ReadAllRequest) Descriptor() ([]byte, []int) {
	return file_v1_capture_proto_rawDescGZIP(), []int{1}
}

type ImageReply struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Image *Image `protobuf:"bytes,1,opt,name=image,proto3" json:"image,omitempty"`
}

func (x *ImageReply) Reset() {
	*x = ImageReply{}
	if protoimpl.UnsafeEnabled {
		mi := &file_v1_capture_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ImageReply) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ImageReply) ProtoMessage() {}

func (x *ImageReply) ProtoReflect() protoreflect.Message {
	mi := &file_v1_capture_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ImageReply.ProtoReflect.Descriptor instead.
func (*ImageReply) Descriptor() ([]byte, []int) {
	return file_v1_capture_proto_rawDescGZIP(), []int{2}
}

func (x *ImageReply) GetImage() *Image {
	if x != nil {
		return x.Image
	}
	return nil
}

type ImagesReply struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Images []*Image `protobuf:"bytes,1,rep,name=images,proto3" json:"images,omitempty"`
}

func (x *ImagesReply) Reset() {
	*x = ImagesReply{}
	if protoimpl.UnsafeEnabled {
		mi := &file_v1_capture_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ImagesReply) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ImagesReply) ProtoMessage() {}

func (x *ImagesReply) ProtoReflect() protoreflect.Message {
	mi := &file_v1_capture_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ImagesReply.ProtoReflect.Descriptor instead.
func (*ImagesReply) Descriptor() ([]byte, []int) {
	return file_v1_capture_proto_rawDescGZIP(), []int{3}
}

func (x *ImagesReply) GetImages() []*Image {
	if x != nil {
		return x.Images
	}
	return nil
}

type Image struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Data []byte `protobuf:"bytes,1,opt,name=data,proto3" json:"data,omitempty"`
}

func (x *Image) Reset() {
	*x = Image{}
	if protoimpl.UnsafeEnabled {
		mi := &file_v1_capture_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Image) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Image) ProtoMessage() {}

func (x *Image) ProtoReflect() protoreflect.Message {
	mi := &file_v1_capture_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Image.ProtoReflect.Descriptor instead.
func (*Image) Descriptor() ([]byte, []int) {
	return file_v1_capture_proto_rawDescGZIP(), []int{4}
}

func (x *Image) GetData() []byte {
	if x != nil {
		return x.Data
	}
	return nil
}

var File_v1_capture_proto protoreflect.FileDescriptor

var file_v1_capture_proto_rawDesc = []byte{
	0x0a, 0x10, 0x76, 0x31, 0x2f, 0x63, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x12, 0x12, 0x63, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x65, 0x72, 0x76,
	0x69, 0x63, 0x65, 0x2e, 0x76, 0x31, 0x22, 0x20, 0x0a, 0x0e, 0x52, 0x65, 0x61, 0x64, 0x4f, 0x6e,
	0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x0e, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x03, 0x52, 0x02, 0x69, 0x64, 0x22, 0x10, 0x0a, 0x0e, 0x52, 0x65, 0x61, 0x64,
	0x41, 0x6c, 0x6c, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x22, 0x3d, 0x0a, 0x0a, 0x49, 0x6d,
	0x61, 0x67, 0x65, 0x52, 0x65, 0x70, 0x6c, 0x79, 0x12, 0x2f, 0x0a, 0x05, 0x69, 0x6d, 0x61, 0x67,
	0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x19, 0x2e, 0x63, 0x61, 0x70, 0x74, 0x75, 0x72,
	0x65, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x49, 0x6d, 0x61,
	0x67, 0x65, 0x52, 0x05, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x22, 0x40, 0x0a, 0x0b, 0x49, 0x6d, 0x61,
	0x67, 0x65, 0x73, 0x52, 0x65, 0x70, 0x6c, 0x79, 0x12, 0x31, 0x0a, 0x06, 0x69, 0x6d, 0x61, 0x67,
	0x65, 0x73, 0x18, 0x01, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x19, 0x2e, 0x63, 0x61, 0x70, 0x74, 0x75,
	0x72, 0x65, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x49, 0x6d,
	0x61, 0x67, 0x65, 0x52, 0x06, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x73, 0x22, 0x1b, 0x0a, 0x05, 0x49,
	0x6d, 0x61, 0x67, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x64, 0x61, 0x74, 0x61, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x0c, 0x52, 0x04, 0x64, 0x61, 0x74, 0x61, 0x32, 0xac, 0x01, 0x0a, 0x07, 0x43, 0x61, 0x70,
	0x74, 0x75, 0x72, 0x65, 0x12, 0x4f, 0x0a, 0x07, 0x52, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x65, 0x12,
	0x22, 0x2e, 0x63, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63,
	0x65, 0x2e, 0x76, 0x31, 0x2e, 0x52, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x65, 0x52, 0x65, 0x71, 0x75,
	0x65, 0x73, 0x74, 0x1a, 0x1e, 0x2e, 0x63, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x65,
	0x72, 0x76, 0x69, 0x63, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x49, 0x6d, 0x61, 0x67, 0x65, 0x52, 0x65,
	0x70, 0x6c, 0x79, 0x22, 0x00, 0x12, 0x50, 0x0a, 0x07, 0x52, 0x65, 0x61, 0x64, 0x41, 0x6c, 0x6c,
	0x12, 0x22, 0x2e, 0x63, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69,
	0x63, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x52, 0x65, 0x61, 0x64, 0x41, 0x6c, 0x6c, 0x52, 0x65, 0x71,
	0x75, 0x65, 0x73, 0x74, 0x1a, 0x1f, 0x2e, 0x63, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73,
	0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x49, 0x6d, 0x61, 0x67, 0x65, 0x73,
	0x52, 0x65, 0x70, 0x6c, 0x79, 0x22, 0x00, 0x42, 0x1b, 0x5a, 0x19, 0x61, 0x70, 0x69, 0x2f, 0x63,
	0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x2f, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x2f, 0x76,
	0x31, 0x3b, 0x76, 0x31, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_v1_capture_proto_rawDescOnce sync.Once
	file_v1_capture_proto_rawDescData = file_v1_capture_proto_rawDesc
)

func file_v1_capture_proto_rawDescGZIP() []byte {
	file_v1_capture_proto_rawDescOnce.Do(func() {
		file_v1_capture_proto_rawDescData = protoimpl.X.CompressGZIP(file_v1_capture_proto_rawDescData)
	})
	return file_v1_capture_proto_rawDescData
}

var file_v1_capture_proto_msgTypes = make([]protoimpl.MessageInfo, 5)
var file_v1_capture_proto_goTypes = []interface{}{
	(*ReadOneRequest)(nil), // 0: capture.service.v1.ReadOneRequest
	(*ReadAllRequest)(nil), // 1: capture.service.v1.ReadAllRequest
	(*ImageReply)(nil),     // 2: capture.service.v1.ImageReply
	(*ImagesReply)(nil),    // 3: capture.service.v1.ImagesReply
	(*Image)(nil),          // 4: capture.service.v1.Image
}
var file_v1_capture_proto_depIdxs = []int32{
	4, // 0: capture.service.v1.ImageReply.image:type_name -> capture.service.v1.Image
	4, // 1: capture.service.v1.ImagesReply.images:type_name -> capture.service.v1.Image
	0, // 2: capture.service.v1.Capture.ReadOne:input_type -> capture.service.v1.ReadOneRequest
	1, // 3: capture.service.v1.Capture.ReadAll:input_type -> capture.service.v1.ReadAllRequest
	2, // 4: capture.service.v1.Capture.ReadOne:output_type -> capture.service.v1.ImageReply
	3, // 5: capture.service.v1.Capture.ReadAll:output_type -> capture.service.v1.ImagesReply
	4, // [4:6] is the sub-list for method output_type
	2, // [2:4] is the sub-list for method input_type
	2, // [2:2] is the sub-list for extension type_name
	2, // [2:2] is the sub-list for extension extendee
	0, // [0:2] is the sub-list for field type_name
}

func init() { file_v1_capture_proto_init() }
func file_v1_capture_proto_init() {
	if File_v1_capture_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_v1_capture_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ReadOneRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_v1_capture_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ReadAllRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_v1_capture_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ImageReply); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_v1_capture_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ImagesReply); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_v1_capture_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Image); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_v1_capture_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   5,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_v1_capture_proto_goTypes,
		DependencyIndexes: file_v1_capture_proto_depIdxs,
		MessageInfos:      file_v1_capture_proto_msgTypes,
	}.Build()
	File_v1_capture_proto = out.File
	file_v1_capture_proto_rawDesc = nil
	file_v1_capture_proto_goTypes = nil
	file_v1_capture_proto_depIdxs = nil
}