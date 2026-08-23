static const u32 sFieldMugshotGfx_Test_Brendan[] = INCBIN_U32("graphics/field_mugshots/test_brendan.4bpp.lz");
static const u16 sFieldMugshotPal_Test_Brendan[] = INCBIN_U16("graphics/field_mugshots/test_brendan.gbapal");
static const u32 sFieldMugshotGfx_Test_May[] = INCBIN_U32("graphics/field_mugshots/test_may.4bpp.lz");
static const u16 sFieldMugshotPal_Test_May[] = INCBIN_U16("graphics/field_mugshots/test_may.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT] =
{
    [MUGSHOT_TEST_BRENDAN] =
    {
        .gfx = sFieldMugshotGfx_Test_Brendan,
        .pal = sFieldMugshotPal_Test_Brendan,
    },
    [MUGSHOT_TEST_MAY] =
    {
        .gfx = sFieldMugshotGfx_Test_May,
        .pal = sFieldMugshotPal_Test_May,
    },
};
