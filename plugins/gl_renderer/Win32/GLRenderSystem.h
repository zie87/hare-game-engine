#ifndef _GLRENDERSYSTEM_H_
#define _GLRENDERSYSTEM_H_

namespace hare_gl
{
    class GLRenderSystem : public RenderSystem
    {
    public:
        GLRenderSystem();
        virtual ~GLRenderSystem();

        virtual void initalize();
        virtual void release();

        virtual void beginFrame();
        virtual void render();
        virtual void render(RenderUnit* operation);
        virtual void endFrame();
        virtual void clear(bool z);

        virtual void setShaderParams(const ShaderParams& shaderParams);
        virtual void setTextureStage(const TextureStage& textureStage);

        virtual Texture* createTexture();
    };
}


#endif